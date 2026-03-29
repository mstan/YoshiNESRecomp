"""Compare entity/sprite RAM between native (4370) and emulated (4371)."""
import socket, json, time

def q(port, d):
    s = socket.socket()
    s.connect(('127.0.0.1', port))
    s.settimeout(2)
    s.sendall((json.dumps(d) + '\n').encode())
    time.sleep(0.2)
    r = b''
    while True:
        try: r += s.recv(8192)
        except: break
    s.close()
    for l in reversed(r.decode().strip().split('\n')):
        try: return json.loads(l)
        except: pass
    return {}

def dump(port, addr):
    r = q(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    return r.get("hex", "")

N, E = 4370, 4371

# Compare entity position ranges
# Entity data is typically at $0264-$02FF (positions, tiles, attributes)
for region_name, start in [
    ("OAM shadow $0700", 0x700),
    ("Entity X $0294", 0x294),
    ("Entity Y $02AC", 0x2AC),
    ("Entity state $0264", 0x264),
    ("Entity data $027C", 0x27C),
]:
    nh = dump(N, start)
    eh = dump(E, start)
    diffs = 0
    first_diff = None
    for i in range(min(32, len(nh)//2, len(eh)//2)):
        nv = int(nh[i*2:i*2+2], 16)
        ev = int(eh[i*2:i*2+2], 16)
        if nv != ev:
            diffs += 1
            if first_diff is None:
                first_diff = (start + i, nv, ev)
    print(f"{region_name}: {diffs}/32 diffs", end="")
    if first_diff:
        print(f"  first: ${first_diff[0]:04X} N=${first_diff[1]:02X} E=${first_diff[2]:02X}", end="")
    print()

# Detailed OAM comparison: first 16 sprites
print("\nOAM first 16 sprites:")
print(f"{'Spr':>3} {'N_Y':>4} {'N_T':>4} {'N_A':>4} {'N_X':>4} | {'E_Y':>4} {'E_T':>4} {'E_A':>4} {'E_X':>4} {'Match':>6}")
nh = dump(N, 0x700)
eh = dump(E, 0x700)
for i in range(16):
    ny = int(nh[i*8:i*8+2], 16)
    nt = int(nh[i*8+2:i*8+4], 16)
    na = int(nh[i*8+4:i*8+6], 16)
    nx = int(nh[i*8+6:i*8+8], 16)
    ey = int(eh[i*8:i*8+2], 16)
    et = int(eh[i*8+2:i*8+4], 16)
    ea = int(eh[i*8+4:i*8+6], 16)
    ex = int(eh[i*8+6:i*8+8], 16)
    m = "OK" if ny==ey and nt==et and na==ea and nx==ex else "DIFF"
    print(f"{i:3d} {ny:4d} ${nt:02X} ${na:02X} {nx:4d} | {ey:4d} ${et:02X} ${ea:02X} {ex:4d} {m:>6}")
