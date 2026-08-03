# YoshiNESRecomp

> _This recompilation is a **byproduct of developing
> [nesrecomp](https://github.com/mstan/nesrecomp)** — the games are the proving ground, the framework is the goal.
> **These are in-development previews, not finished ports — expect rough
> edges**, and depth will keep landing over months, not days. My time for any
> one title is limited, so I ask for your patience. Contributions are welcome —
> testing, issues, and PRs to the game or framework all help and will
> accelerate this game's polish. More on the why at:
> [Recomp + AI: 5 Months Later »](https://1379.tech/recomp-ai-5-months-later/)_

Static recompilation of Yoshi (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Believed fully playable.** Title screen, single-player puzzle mode, two-player versus, and the demo all run end-to-end. If you find a bug, please [open an issue](../../issues).

## What Works

- Title screen
- Single-player puzzle mode (Type-A and Type-B)
- Two-player versus mode
- Score, level, and speed display
- The attract-mode demo
- Both controllers

## Quick Start

1. Download `YoshiNESRecomp-windows-x64.zip` from [Releases](../../releases)
2. Extract and run `YoshiRecomp.exe`
3. Select your Yoshi (USA) ROM when prompted — the path is saved for future launches

## Controls

| NES Button | Keyboard |
|------------|----------|
| D-Pad      | Arrow keys |
| A          | Z |
| B          | X |
| Start      | Enter |
| Select     | Tab |

| Hotkey | Action |
|--------|--------|
| F5     | Toggle turbo (fast-forward) |
| F6     | Save state |
| F7     | Load state |

Yoshi is a puzzle game with no battery save, so save states are the way to bookmark a session.

### Experimental 3D Diorama

The launcher exposes an optional `3D Voxel Diorama` package. It gives the
playfield frame real depth while keeping Yoshi, enemies, eggs, and other
readable pieces as camera-facing sprite cards. The stock ROM is never patched
and the package is disabled by default.

With the package enabled, use the numpad to experiment: `8/2` pitch, `4/6`
yaw, `7/9` roll, `+/-` zoom, `1/3` sprite scale, `0` toggle, and `5` reset.

## Building from Source

Requires Visual Studio 2022 and CMake 3.20+.

```bash
git clone https://github.com/mstan/YoshiNESRecomp
cd YoshiNESRecomp

# Windows
setup.bat

# Linux / macOS
chmod +x setup.sh && ./setup.sh
```

This initializes the pinned [nesrecomp](https://github.com/mstan/nesrecomp)
submodule and links the Nestopia oracle core.

Then build:

```bash
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

Place your Yoshi (USA) ROM in the build directory or select it at runtime.

## Architecture

This is a **static recompiler**, not an emulator. The original 6502 machine code is translated to C at build time, then compiled to native x64. The NES PPU, APU, and MMC1 mapper are simulated by the runner library.

- `game.toml` — recompiler configuration (data regions, dispatch extras)
- `extras.c` — game-specific hooks (TCP debug server, verify-mode integration)
- `verify_mode.c` — optional dual-execution verification against a Nestopia oracle
- `generated/` — auto-generated C code (do not edit manually)
- `nesrecomp/` — framework, consumed via directory junction + pin file

## Known Limitations

- Audio is basic (APU register writes are captured but full audio mixing is work-in-progress)

---

<p align="center">
  <sub><b>R.A.I.D. — Retro AI Development</b> · a Discord for AI-assisted retro reverse-engineering, decomp &amp; recomp</sub>
</p>

<p align="center">
  <a href="https://discord.gg/Ad9BwSzctP"><img src=".github/raid-discord.png" alt="Join the Retro AI Development (R.A.I.D.) Discord" width="200"></a>
</p>
