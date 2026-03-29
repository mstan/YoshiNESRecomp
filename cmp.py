import socket, json, time

def q(port, d):
    s = socket.socket()
    s.connect(('127.0.0.1', port))
    s.settimeout(2)
    s.sendall((json.dumps(d) + '\n').encode())
    time.sleep(0.2)
    r = b''
    while True:
        try:
            r += s.recv(4096)
        except:
            break
    s.close()
    for l in reversed(r.decode().strip().split('\n')):
        try:
            return json.loads(l)
        except:
            pass
    return {}

def rb(port, addr):
    r = q(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    return int(r.get("hex", "00")[:2], 16)

nf = q(4370, {"cmd": "frame", "id": 1}).get("frame", "?")
ef = q(4371, {"cmd": "frame", "id": 1}).get("frame", "?")
print("Native frame=%s  Emu frame=%s" % (nf, ef))

checks = [
    ("$0248 state", 0x248),
    ("$0076 chr1", 0x76),
    ("$0077 chr0", 0x77),
    ("$0075 ctrl", 0x75),
    ("$0636 snd_en", 0x636),
    ("$0689 snd_id", 0x689),
    ("$00B1 vblank", 0xB1),
    ("$0681 timer", 0x681),
    ("$06BA snd_rq", 0x6BA),
]

print("\n%-16s %8s %8s %s" % ("Address", "Native", "Emu", ""))
print("-" * 45)
for name, addr in checks:
    nv = rb(4370, addr)
    ev = rb(4371, addr)
    m = "OK" if nv == ev else "*** DIFF ***"
    print("%-16s %5d $%02X %5d $%02X %s" % (name, nv, nv, ev, ev, m))
