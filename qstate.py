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

def rb(port, addr):
    r = q(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    return int(r.get("hex", "00")[:2], 16)

for port, name in [(4370, "Native"), (4371, "Emu")]:
    f = q(port, {"cmd": "frame", "id": 1}).get("frame", "?")
    s = rb(port, 0x248)
    snd = rb(port, 0x689)
    chr1 = rb(port, 0x76)
    chr0 = rb(port, 0x77)
    en = rb(port, 0x636)
    print(f"{name} f={f}: $248={s} $689=${snd:02X} $76={chr1} $77={chr0} $636=${en:02X}")
