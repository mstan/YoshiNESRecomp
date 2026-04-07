#!/usr/bin/env python3
"""
Capture a complete title-screen state snapshot from a running YoshiRecomp
debug server. Works for both --native (port 4380) and --emulated (port 4381,
provided extras.c mirrors oracle state into runner globals).

Usage:
    python capture_title_state.py <port> <output_file>

The script picks the snapshot frame deterministically: the first frame at
which PPUMASK != 0, then +30 frames forward to let the title fully load.
"""
import json, socket, sys, time

def cmd(sock, line, expect_lines=1):
    sock.sendall((line + "\n").encode())
    sock.settimeout(3.0)
    buf = b""
    lines = 0
    while lines < expect_lines:
        try:
            d = sock.recv(65536)
        except socket.timeout:
            break
        if not d:
            break
        buf += d
        lines = buf.count(b"\n")
    return buf.decode(errors="replace").strip().split("\n")

def cmd1(sock, line):
    return json.loads(cmd(sock, line)[0])

def find_first_render_frame(sock, max_frame):
    """Walk the timeseries until ppumask != 0."""
    for start in range(0, max_frame, 100):
        end = min(start + 99, max_frame)
        r = cmd1(sock, json.dumps({"cmd": "frame_timeseries",
                                   "start": start, "end": end}))
        for entry in r.get("ts", []):
            if entry and entry.get("mask", 0) != 0:
                return entry["f"]
    return None

def hex_dump(sock, frame, addr, length, label):
    """Read length bytes from a historical frame, in 256-byte chunks."""
    out = bytearray()
    off = 0
    while off < length:
        chunk = min(256, length - off)
        r = cmd1(sock, json.dumps({"cmd": "read_frame_ram",
                                   "frame": frame,
                                   "addr": f"0x{addr+off:04X}",
                                   "len": chunk}))
        if not r.get("ok"):
            print(f"  ! {label} @0x{addr+off:04X}+{chunk}: {r.get('error')}",
                  file=sys.stderr)
            return None
        out.extend(bytes.fromhex(r["hex"]))
        off += chunk
    return bytes(out)

def main():
    if len(sys.argv) != 3:
        print("usage: capture_title_state.py <port> <out_file>", file=sys.stderr)
        sys.exit(2)
    port = int(sys.argv[1])
    out_path = sys.argv[2]

    s = socket.socket()
    s.connect(("127.0.0.1", port))

    # Confirm liveness, get current frame count.
    h = cmd1(s, "history")
    cur = h["newest"]
    print(f"port {port}: ring count={h['count']} oldest={h['oldest']} newest={cur}")

    first_render = find_first_render_frame(s, cur)
    if first_render is None:
        print("ERROR: never saw PPUMASK != 0", file=sys.stderr)
        sys.exit(1)
    print(f"first PPUMASK!=0 at frame {first_render}")

    # Pick a frame well into the title screen — both sides should be in
    # steady-state title rendering by then. We use absolute frame 200 if
    # available; otherwise the latest frame minus 10.
    target = 200 if cur >= 200 else max(cur - 10, first_render)
    print(f"capture target frame: {target}")

    # Pull get_frame for full PPU/CPU/mapper regs at that frame.
    fr = cmd1(s, json.dumps({"cmd": "get_frame", "frame": target}))
    if not fr.get("ok"):
        print(f"ERROR: get_frame {target}: {fr.get('error')}", file=sys.stderr)
        sys.exit(1)

    # Now pull the contents of all PPU memory regions at that frame.
    # CHR pattern tables: PPU $0000-$1FFF (encoded as 0x10000-0x11FFF in
    # frame_read_byte). We pass addr 0x10000 + offset.
    chr_bytes = hex_dump(s, target, 0x10000, 0x2000, "CHR")
    nt_bytes  = hex_dump(s, target, 0x2000,  0x1000, "NT")
    pal_bytes = hex_dump(s, target, 0x3F00,  0x20,   "PAL")
    # OAM exposed at 0xFE00 in frame_read_byte.
    oam_bytes = hex_dump(s, target, 0xFE00,  0x100,  "OAM")
    ram_bytes = hex_dump(s, target, 0x0000,  0x800,  "RAM")

    snapshot = {
        "port": port,
        "captured_at_native_frame": cur,
        "first_render_frame": first_render,
        "frame": target,
        "frame_record": fr,
        "chr_pattern_table_hex":   chr_bytes.hex() if chr_bytes else None,
        "nametable_hex":           nt_bytes.hex()  if nt_bytes  else None,
        "palette_hex":             pal_bytes.hex() if pal_bytes else None,
        "oam_hex":                 oam_bytes.hex() if oam_bytes else None,
        "work_ram_hex":            ram_bytes.hex() if ram_bytes else None,
    }

    with open(out_path, "w") as f:
        json.dump(snapshot, f, indent=2)
    print(f"saved {out_path}")
    s.close()

if __name__ == "__main__":
    main()
