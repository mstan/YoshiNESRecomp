import socket, json, time

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('127.0.0.1', 4370))
s.settimeout(2)

def cmd(d):
    s.sendall((json.dumps(d)+'\n').encode())
    time.sleep(0.1)
    r = b''
    while True:
        try: r += s.recv(8192)
        except: break
    for line in reversed(r.decode(errors='replace').strip().split('\n')):
        try: return json.loads(line)
        except: continue
    return {}

for i in range(20):
    r = cmd({"cmd": "dump_ram", "id": 1, "addr": "0x0076"})
    h = r.get("hex", "0000")
    v76 = int(h[0:2], 16)
    v77 = int(h[2:4], 16)
    fr = cmd({"cmd": "frame", "id": 1}).get("frame", "?")
    print(f"frame={fr} $76={v76} $77={v77}")
    time.sleep(0.5)

s.close()
