# ROM header compatibility

The launcher verifies the original PRG+CHR game data. The runtime also checks
the cartridge board needed by native code. Equivalent legacy iNES and NES 2.0
headers are accepted after resolving known legacy board details. NTSC and PAL
profiles remain separate; different game data, board wiring, RAM geometry or
console metadata cannot bypass these checks.

No ROM is included. USA retail images remain preferred where available.
This patch retains the existing renderer and enhancement packages. Automated
release checks cover header acceptance, startup and native/interpreter
execution; they do not constitute a new complete stage/mechanics audit.

This release uses the catalogued USA payload CRC32 `E7EAD93B` (128 KiB PRG,
32 KiB CHR). The canonical NES 2.0 file has SHA-1
`71cc02d4a005c6ad71f1fbf2b3ccd890d65056a3`. An older legacy header that declares
64 KiB CHR is accepted only for this complete known payload and length; the
loader does not rewrite the original file. The previous larger build image
has been replaced with the verified USA retail input. Existing saves/states
from that other image are not qualified for this release.
