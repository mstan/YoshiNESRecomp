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
            r += s.recv(8192)
        except:
            break
    s.close()
    for l in reversed(r.decode().strip().split('\n')):
        try:
            return json.loads(l)
        except:
            pass
    return {}

# Dump full 2KB RAM from both
nr = q(4370, {"cmd": "dump_ram", "id": 1, "addr": "0x0000"})
er = q(4371, {"cmd": "dump_ram", "id": 1, "addr": "0x0000"})
nh = nr.get("hex", "")
eh = er.get("hex", "")

# Compare byte by byte (first 2KB = 0x800 = 512 hex chars... actually 0x800 bytes = 1600 hex chars but dump returns 256 bytes)
diffs = []
for i in range(min(len(nh)//2, len(eh)//2, 256)):
    nv = int(nh[i*2:i*2+2], 16)
    ev = int(eh[i*2:i*2+2], 16)
    if nv != ev:
        diffs.append((i, nv, ev))

print(f"Diffs in first 256 bytes ($0000-$00FF): {len(diffs)}")
for addr, nv, ev in diffs[:20]:
    print(f"  ${addr:04X}: native=${nv:02X} emu=${ev:02X}")

# Now check $0600-$06FF range (sound registers)
nr2 = q(4370, {"cmd": "dump_ram", "id": 1, "addr": "0x0600"})
er2 = q(4371, {"cmd": "dump_ram", "id": 1, "addr": "0x0600"})
nh2 = nr2.get("hex", "")
eh2 = er2.get("hex", "")

diffs2 = []
for i in range(min(len(nh2)//2, len(eh2)//2, 256)):
    nv = int(nh2[i*2:i*2+2], 16)
    ev = int(eh2[i*2:i*2+2], 16)
    if nv != ev:
        diffs2.append((0x600 + i, nv, ev))

print(f"\nDiffs in $0600-$06FF (sound regs): {len(diffs2)}")
for addr, nv, ev in diffs2[:30]:
    print(f"  ${addr:04X}: native=${nv:02X} emu=${ev:02X}")
