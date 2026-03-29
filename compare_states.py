"""Compare native (port 4370) vs emulated (port 4371) state via TCP."""
import socket, json, time

def query(port, cmd_dict):
    s = socket.socket()
    s.connect(('127.0.0.1', port))
    s.settimeout(2)
    s.sendall((json.dumps(cmd_dict) + '\n').encode())
    time.sleep(0.2)
    r = b''
    while True:
        try: r += s.recv(8192)
        except: break
    s.close()
    for line in reversed(r.decode(errors='replace').strip().split('\n')):
        try: return json.loads(line)
        except: pass
    return {}

def read_byte(port, addr):
    r = query(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    return int(r.get("hex", "00")[:2], 16)

def read_bytes(port, addr, n):
    r = query(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    h = r.get("hex", "00" * n)
    return [int(h[i*2:i*2+2], 16) for i in range(min(n, len(h)//2))]

NATIVE = 4370
EMU = 4371

# Get frame counts
nf = query(NATIVE, {"cmd": "frame", "id": 1}).get("frame", "?")
ef = query(EMU, {"cmd": "frame", "id": 1}).get("frame", "?")
print(f"Native frame: {nf}, Emulated frame: {ef}")

# Key addresses to compare
addrs = {
    "$0248 (state)": 0x0248,
    "$0076 (chr1)":  0x0076,
    "$0077 (chr0)":  0x0077,
    "$0075 (ctrl)":  0x0075,
    "$0636 (snd_en)": 0x0636,
    "$0689 (snd_id)": 0x0689,
    "$00B1 (vblank)": 0x00B1,
    "$0681 (timer)":  0x0681,
    "$0220 (ppu_up)": 0x0220,
    "$06BA (snd_req)": 0x06BA,
    "$06FE (snd_req2)": 0x06FE,
}

print(f"\n{'Address':<20} {'Native':>8} {'Emulated':>8} {'Match':>6}")
print("-" * 50)
for name, addr in addrs.items():
    nv = read_byte(NATIVE, addr)
    ev = read_byte(EMU, addr)
    match = "OK" if nv == ev else "DIFF!"
    print(f"{name:<20} {nv:>8} ({nv:#04x}) {ev:>8} ({ev:#04x}) {match:>6}")

# PPU state
np = query(NATIVE, {"cmd": "ppu_state", "id": 1})
print(f"\nNative PPU: ctrl={np.get('ppuctrl')} mask={np.get('ppumask')} scroll=({np.get('scroll_x')},{np.get('scroll_y')})")

# Timeseries last few frames
nts = query(NATIVE, {"cmd": "frame_timeseries", "id": 1, "start": max(0,int(nf)-3), "end": int(nf)})
ets = query(EMU, {"cmd": "frame_timeseries", "id": 1, "start": max(0,int(ef)-3), "end": int(ef)})
print(f"\nNative timeseries (last 3): {json.dumps(nts.get('ts',[])[0:1], indent=None)[:200]}")
print(f"Emu timeseries (last 3): {json.dumps(ets.get('ts',[])[0:1], indent=None)[:200]}")
