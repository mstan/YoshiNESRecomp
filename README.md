# YoshiNESRecomp

Static recompilation of Yoshi (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Gameplay is fully working.** The in-game puzzle mode renders correctly with zero dispatch misses. The title/menu screen has a known visual bug — background tiles don't render correctly during the intro sequence due to NMI timing differences. Pressing Start advances to gameplay which works normally.

## What Works

- Full puzzle gameplay (pieces falling, matching, clearing)
- Score, level, and speed display
- Yoshi character and egg animations
- 1-player and 2-player modes
- Sound and music
- Controller input

## Known Issues

- **Title/menu screen**: Background tiles appear white instead of green. The intro animation sequence doesn't complete correctly due to NMI timing causing the game's state machine to take a different path than real hardware. Gameplay itself is unaffected.

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

## Building from Source

Requires Visual Studio 2022 and CMake 3.20+.

```bash
git clone --recursive https://github.com/mstan/YoshiNESRecomp
cd YoshiNESRecomp
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

Place your `Yoshi (USA).nes` ROM in the build directory or select it at runtime.

## Nestopia Oracle (Verify Mode)

This project includes a Nestopia libretro core bridge for debugging:

```bash
# Run with Nestopia verification (compares RAM each frame)
YoshiRecomp.exe "Yoshi.nes" --verify

# Run Nestopia-only (reference rendering)
YoshiRecomp.exe "Yoshi.nes" --emulated
```

## Architecture

This is a **static recompiler**, not an emulator. The original 6502 machine code is translated to C at build time, then compiled to native x64. The NES PPU, APU, and mapper are simulated by the runner library.

- `game.cfg` — recompiler configuration (data regions, extra functions, merge functions)
- `extras.c` — game-specific hooks (CRC32, debug server, verify mode)
- `nesrecomp/` — the recompiler framework (submodule)
- `nestopia-core/` — Nestopia libretro core for oracle verification
- `generated/` — auto-generated C from 6502 ROM (do not edit)

## ROM Compatibility

- **CRC32**: `0x9474C09C`
- **Mapper**: 1 (MMC1), 8 PRG banks (128KB), 16 CHR ROM banks (128KB)
