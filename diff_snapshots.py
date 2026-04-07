#!/usr/bin/env python3
"""Diff two title-screen snapshots produced by capture_title_state.py.

Reports byte-level diffs in CHR pattern tables, nametable, palette, OAM,
work RAM, plus high-level diffs in the PPU/CPU/mapper register fields
of frame_record.
"""
import json, sys

def load(p):
    with open(p) as f:
        return json.load(f)

def hex_to_bytes(s):
    return bytes.fromhex(s) if s else b""

def diff_region(name, base_addr, a, b, max_show=64):
    diffs = []
    for i, (x, y) in enumerate(zip(a, b)):
        if x != y:
            diffs.append((base_addr + i, x, y))
    if not diffs:
        print(f"  {name}: identical ({len(a)} bytes)")
        return
    print(f"  {name}: {len(diffs)} differing bytes (of {len(a)})")
    for addr, x, y in diffs[:max_show]:
        print(f"    0x{addr:04X}: native=0x{x:02X}  oracle=0x{y:02X}")
    if len(diffs) > max_show:
        print(f"    ... ({len(diffs) - max_show} more)")

def diff_dict(name, a, b, keys):
    print(f"\n[{name}]")
    for k in keys:
        av = a.get(k); bv = b.get(k)
        marker = "  " if av == bv else "* "
        print(f"  {marker}{k}: native={av}  oracle={bv}")

def main():
    if len(sys.argv) != 3:
        print("usage: diff_snapshots.py <native.json> <oracle.json>")
        sys.exit(2)
    nat = load(sys.argv[1])
    ora = load(sys.argv[2])

    print(f"NATIVE  port={nat['port']} target_frame={nat['frame']}  "
          f"first_render={nat['first_render_frame']}")
    print(f"ORACLE  port={ora['port']} target_frame={ora['frame']}  "
          f"first_render={ora['first_render_frame']}")

    nfr = nat["frame_record"]
    ofr = ora["frame_record"]

    diff_dict("PPU regs", nfr["ppu"], ofr["ppu"],
              ["ctrl", "mask", "status", "scroll_x", "scroll_y",
               "ppuaddr", "addr_latch", "scroll_latch"])
    diff_dict("CPU regs", nfr["cpu"], ofr["cpu"],
              ["A", "X", "Y", "S", "P"])
    diff_dict("Mapper", nfr["mapper"], ofr["mapper"],
              ["type", "ctrl", "chr0", "chr1", "prg_reg", "mirror"])

    print("\n[Memory regions]")
    chr_n = hex_to_bytes(nat["chr_pattern_table_hex"])
    chr_o = hex_to_bytes(ora["chr_pattern_table_hex"])
    diff_region("CHR sprite half ($0000-$0FFF)", 0x0000,
                chr_n[:0x1000], chr_o[:0x1000], max_show=24)
    diff_region("CHR BG half     ($1000-$1FFF)", 0x1000,
                chr_n[0x1000:], chr_o[0x1000:], max_show=24)

    nt_n = hex_to_bytes(nat["nametable_hex"])
    nt_o = hex_to_bytes(ora["nametable_hex"])
    diff_region("Nametable $2000-$23BF (tiles)", 0x2000,
                nt_n[0:0x3C0],     nt_o[0:0x3C0],     max_show=32)
    diff_region("Attribute $23C0-$23FF",         0x23C0,
                nt_n[0x3C0:0x400], nt_o[0x3C0:0x400], max_show=16)
    if len(nt_n) > 0x400 and len(nt_o) > 0x400:
        diff_region("NT2 $2400-$27FF",           0x2400,
                    nt_n[0x400:0x800], nt_o[0x400:0x800], max_show=8)

    pal_n = hex_to_bytes(nat["palette_hex"])
    pal_o = hex_to_bytes(ora["palette_hex"])
    diff_region("Palette $3F00-$3F1F", 0x3F00, pal_n, pal_o, max_show=32)

    oam_n = hex_to_bytes(nat["oam_hex"])
    oam_o = hex_to_bytes(ora["oam_hex"])
    diff_region("OAM $0000-$00FF", 0x0000, oam_n, oam_o, max_show=16)

    ram_n = hex_to_bytes(nat["work_ram_hex"])
    ram_o = hex_to_bytes(ora["work_ram_hex"])
    diff_region("Work RAM $0000-$07FF", 0x0000, ram_n, ram_o, max_show=24)

if __name__ == "__main__":
    main()
