#!/usr/bin/env python3
"""Scan g_ppuscroll_x/y across all available frames in the ring buffer."""
import socket, sys, json

def cmd(s, c):
    s.sendall((c + "\n").encode())
    buf = b""
    s.settimeout(3.0)
    while not buf.endswith(b"\n"):
        d = s.recv(65536)
        if not d:
            break
        buf += d
    return json.loads(buf)

def main():
    port = int(sys.argv[1]) if len(sys.argv) > 1 else 4380
    s = socket.socket()
    s.connect(("127.0.0.1", port))
    h = cmd(s, "history")
    newest = h["newest"]
    print(f"port={port} newest={newest}")
    seen = {}
    for start in range(0, newest + 1, 100):
        end = min(start + 99, newest)
        r = cmd(s, json.dumps({"cmd": "frame_timeseries",
                               "start": start, "end": end}))
        for e in r["ts"]:
            if e is None:
                continue
            key = (e.get("sx"), e.get("sy"), e.get("ctrl"), e.get("mask"))
            seen.setdefault(key, []).append(e["f"])
    print("distinct (sx, sy, ctrl, mask) seen:")
    for k in sorted(seen.keys()):
        fs = seen[k]
        print(f"  sx={k[0]:3d} sy={k[1]:3d} ctrl={k[2]:3d} mask={k[3]:3d}: "
              f"{len(fs):4d} frames, first f={fs[:6]}")

if __name__ == "__main__":
    main()
