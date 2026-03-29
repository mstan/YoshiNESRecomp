import socket, json, time

s = socket.socket()
s.connect(('127.0.0.1', 4370))
s.settimeout(2)

def cmd(d):
    s.sendall((json.dumps(d)+'\n').encode())
    time.sleep(0.15)
    r = b''
    while True:
        try: r += s.recv(4096)
        except: break
    for l in reversed(r.decode().strip().split('\n')):
        try: return json.loads(l)
        except: pass
    return {}

# OAM is at $0700 (shadow OAM copied via DMA)
r = cmd({"cmd": "dump_ram", "id": 1, "addr": "0x0700"})
h = r['hex']

print("Visible sprites (Y < 240):")
for i in range(64):
    off = i * 8
    y = int(h[off:off+2], 16)
    tile = int(h[off+2:off+4], 16)
    attr = int(h[off+4:off+6], 16)
    x = int(h[off+6:off+8], 16)
    if y < 240:
        pal = attr & 3
        flip_h = "H" if attr & 0x40 else " "
        flip_v = "V" if attr & 0x80 else " "
        pri = "BG" if attr & 0x20 else "FG"
        print(f"  spr {i:2d}: Y={y:3d} X={x:3d} tile=${tile:02X} pal={pal} {pri} {flip_h}{flip_v}")

s.close()
