# TCP.md — Yoshi Debug Server Protocol

The TCP debug server is the **only** sanctioned debugging interface for this
project. No `printf`, no `fprintf(stderr,...)`, no log spam. If a piece of
state cannot be observed over TCP, **add a command** in
`nesrecomp/runner/src/debug_server.c` (and the oracle counterpart) — do not
work around it.

The same protocol is used by both the native recomp build and the embedded
Nestopia oracle, on different ports.

---

# Ports

| Server | Mode | Port |
|--------|------|------|
| Native recomp (Yoshi) | default / `--debug` | **127.0.0.1:4380** |
| Nestopia oracle (Yoshi) | `--emulated`, `--verify` | **127.0.0.1:4381** |

These ports are **project-unique**. Sibling projects use:
- DrMario / Faxanadu / SMB / LoZ / YoshisCookie: 4370–4371
- Mega Man 3: 4372–4373
- Metroid: 5370
- Yoshi: **4380 / 4381** ← do not change without updating sibling docs

Selection lives in `extras.c::game_on_init` — that is the single source of
truth.

---

# Transport

- TCP over `127.0.0.1`
- Single-threaded, non-blocking, polled once per NES frame on the runner
  side. Do not expect sub-frame latency.
- Line-based: send one command per line, terminated by `\n`. Receive one
  JSON response per line, terminated by `\n`.
- Two request encodings are accepted:
  - **JSON** (preferred): `{"cmd":"read_ppu","addr":"3F00","len":32,"id":7}`
  - **Bare**: `ping\n` — only for the simplest commands
- Responses are always single-line JSON: `{"ok":true,...}` or
  `{"ok":false,"err":"..."}`. The `id` field is echoed when supplied.
- Max command line: **8192 bytes** (`RECV_BUF_SIZE` in `debug_server.c`).
- Only one client at a time.

---

# Ring buffer

Both servers maintain a per-frame ring buffer recording CPU/PPU/RAM/mapper
state. **Query it retroactively** with `get_frame`, `frame_range`,
`frame_timeseries`, and `history`. Do not pause the game to inspect a
single frame — pull it from the ring buffer instead.

When you find a divergence, walk the ring buffer backwards to the FIRST
frame where it appears. That is the only frame worth tracing the writer at.

---

# Command set (current)

Source of truth: the dispatch table in
`nesrecomp/runner/src/debug_server.c` (`s_commands[]`). If you find a
discrepancy with this list, **the code wins** — fix this file.

## Heartbeat / status
| Command | Purpose |
|---------|---------|
| `ping` | Liveness check. Returns frame counter. |
| `frame` | Current frame number. |

## CPU / RAM
| Command | Purpose |
|---------|---------|
| `get_registers` | A, X, Y, S, P, last_func. |
| `read_ram` | Read N bytes of CPU RAM at addr (0x0000–0x07FF, with mapper-aware ranges for $6000–$7FFF). |
| `dump_ram` | Bulk RAM dump. |
| `write_ram` | Poke a RAM byte. Use sparingly — corrupts state. |
| `read_frame_ram` | Read RAM as captured in a specific ring-buffer frame. |
| `restore_frame` | Restore RAM from a ring-buffer frame. |

## PPU / VRAM
| Command | Purpose |
|---------|---------|
| `read_ppu` | Read CHR / nametable / palette ($0000–$3FFF PPU space). |
| `ppu_state` | PPUCTRL, PPUMASK, PPUSTATUS, OAMADDR, scroll/addr latches. |

## Mapper
| Command | Purpose |
|---------|---------|
| `mapper_state` | Current PRG / CHR bank mapping, mapper registers. |

## Watchpoints / follows
| Command | Purpose |
|---------|---------|
| `watch` / `unwatch` | Trigger on RAM writes to an address. |
| `follow` / `unfollow` / `follow_history` | Time-series of a single RAM byte. |

## Input
| Command | Purpose |
|---------|---------|
| `set_input` | Set controller bits for the next frame(s). |
| `clear_input` | Release everything. |

## Execution control
| Command | Purpose |
|---------|---------|
| `pause` / `continue` / `step` | Halt and single-frame-step. |
| `run_to_frame` | Run forward to a target frame number. |
| `quit` | Tell the runner to exit cleanly. |

## Time-travel queries
| Command | Purpose |
|---------|---------|
| `history` | Recent ring-buffer activity summary. |
| `get_frame` | Full snapshot of one frame (CPU/PPU/mapper/zp RAM). |
| `frame_range` | Snapshots over a range. |
| `frame_timeseries` | Specific fields over a range. |
| `first_failure` | First frame where verify-mode failed. |
| `frame_diff` | Byte-level RAM/nametable/palette divergence captured by verify mode for a specific frame. |

## Title-screen debugging note

`--verify` is **single-process**. The native runner runs the game; the
embedded Nestopia oracle runs in a background bridge (`verify_mode.c`).
Only one TCP debug server is open in `--verify`: port **4380**. Port 4381
is opened only by `--emulated` (a separate process where Nestopia drives).

For title-screen first-divergence work:
1. Run `--verify` once. Verify mode captures the first diverging RAM /
   nametable / palette byte for every failing frame into the ring buffer.
2. Query `first_failure` → returns the first failing frame.
3. Query `frame_diff` for that frame → returns: address, native value,
   oracle value, region (RAM / NT / PAL), plus the recomp `last_func`
   recorded for that frame.
4. Trace the writer in Ghidra from `last_func`.

Do NOT rely on stderr `[verify] DIVERGE …` lines — stderr is unreliable
on Windows. The TCP `frame_diff` query is the source of truth.

## Diagnostics
| Command | Purpose |
|---------|---------|
| `watchdog_status` | Why the watchdog tripped. |
| `call_stack` | Recompiled call stack (`last_func` chain). |

## Game-specific
Game-specific commands dispatch via `game_handle_debug_cmd()` in
`extras.c`. Yoshi currently registers no game-specific commands. Add them
here when you do.

---

# Required state for any debugging session

Per `CLAUDE.md` and `PRINCIPLES.md`, a state dump is **all of the
following** — anything missing makes the dump invalid:

### CPU
- A, X, Y, S, P
- Full CPU RAM `0x0000–0x07FF`

### PPU
- PPUCTRL, PPUMASK, PPUSTATUS
- OAMADDR, OAMDATA
- PPUSCROLL, PPUADDR
- Internal latch state (`ppuaddr_latch`, `scroll_latch`)

### VRAM
- Nametables `0x2000–0x2FFF`
- Attribute tables
- Pattern tables `0x0000–0x1FFF` (CHR ROM/RAM)
- Palette `0x3F00–0x3F1F`

### Mapper (MMC1 for Yoshi)
- Current PRG bank mapping
- Current CHR bank mapping (chr0, chr1)
- MMC1 control / shift register state

### Timing
- Frame number
- VBlank / NMI depth

If `read_ppu` / `ppu_state` / `mapper_state` cannot return one of these
fields, **add it to the server** and rebuild before continuing.

---

# Python tooling

Project Python helpers for talking to the TCP servers should land under
`tools/` (create as needed). Conventions:
- One module per concern (`tcp_client.py`, `oracle_diff.py`, etc.).
- All scripts take `--port` so they work against either server.
- Default ports: native `4380`, oracle `4381`.
- Never embed inspection logic inside the runner — keep it in Python so
  the runner stays the system under test.

---

# Adding a new command

1. Add a `handle_xxx` function in `nesrecomp/runner/src/debug_server.c`.
2. Register it in the `s_commands[]` table.
3. Mirror it on the oracle side if it inspects emulator-internal state.
4. Document it in this file under the right section.
5. Rebuild the runner (`cmake --build build --config Release`).
6. **Never** add a side-channel debug log instead. If TCP can't see it,
   TCP needs to grow until it can.
