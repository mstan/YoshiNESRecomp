"""Compare PPU state between native (4370) and emulated (4371)."""
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

def get_sprites(port):
    """Read OAM from $0700 (shadow OAM)."""
    r = q(port, {"cmd": "dump_ram", "id": 1, "addr": "0x0700"})
    h = r.get("hex", "")
    sprites = []
    for i in range(min(64, len(h)//8)):
        y = int(h[i*8:i*8+2], 16)
        tile = int(h[i*8+2:i*8+4], 16)
        attr = int(h[i*8+4:i*8+6], 16)
        x = int(h[i*8+6:i*8+8], 16)
        if y < 240:
            sprites.append((i, y, tile, attr, x))
    return sprites

def get_ppu(port):
    r = q(port, {"cmd": "ppu_state", "id": 1})
    return r

def rb(port, addr):
    r = q(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    return int(r.get("hex", "00")[:2], 16)

N, E = 4370, 4371

nf = q(N, {"cmd": "frame", "id": 1}).get("frame", "?")
ef = q(E, {"cmd": "frame", "id": 1}).get("frame", "?")
print(f"Native frame={nf}  Emu frame={ef}")
print()

# PPU state
np = get_ppu(N)
ep = get_ppu(E)
print(f"PPU ctrl:   N={np.get('ppuctrl')}  E={ep.get('ppuctrl')}")
print(f"PPU mask:   N={np.get('ppumask')}  E={ep.get('ppumask')}")
print(f"Scroll:     N=({np.get('scroll_x')},{np.get('scroll_y')})  E=({ep.get('scroll_x')},{ep.get('scroll_y')})")
print()

# Key RAM
for name, addr in [("$0248 state", 0x248), ("$76 chr1", 0x76), ("$77 chr0", 0x77),
                    ("$0689 snd", 0x689), ("$0636 en", 0x636)]:
    nv = rb(N, addr)
    ev = rb(E, addr)
    m = "" if nv == ev else " *** DIFF"
    print(f"  {name}: N=${nv:02X}  E=${ev:02X}{m}")
print()

# Compare sprites
ns = get_sprites(N)
es = get_sprites(E)
print(f"Visible sprites: native={len(ns)}  emu={len(es)}")

# Find sprite differences
n_set = {(s[1],s[2],s[3],s[4]) for s in ns}  # (y,tile,attr,x)
e_set = {(s[1],s[2],s[3],s[4]) for s in es}

only_native = n_set - e_set
only_emu = e_set - n_set

if only_native:
    print(f"\nSprites ONLY in native ({len(only_native)}):")
    for y,t,a,x in sorted(only_native):
        print(f"  Y={y:3d} X={x:3d} tile=${t:02X} attr=${a:02X}")

if only_emu:
    print(f"\nSprites ONLY in emulator ({len(only_emu)}):")
    for y,t,a,x in sorted(only_emu):
        print(f"  Y={y:3d} X={x:3d} tile=${t:02X} attr=${a:02X}")

# Compare matching sprites by position
common = []
for ni, ny, nt, na, nx in ns:
    for ei, ey, et, ea, ex in es:
        if abs(ny-ey) <= 2 and abs(nx-ex) <= 2:
            if nt != et or na != ea or ny != ey or nx != ex:
                common.append((ni, ny, nt, na, nx, ei, ey, et, ea, ex))
if common:
    print(f"\nSprites with SIMILAR position but different data ({len(common)}):")
    for ni, ny, nt, na, nx, ei, ey, et, ea, ex in common[:10]:
        print(f"  N[{ni}]: Y={ny} X={nx} t=${nt:02X} a=${na:02X}  vs  E[{ei}]: Y={ey} X={ex} t=${et:02X} a=${ea:02X}")
