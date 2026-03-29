"""Find the first frame where $0689 diverges by launching fresh instances."""
import socket, json, time, subprocess, os, signal

def q(port, d):
    s = socket.socket()
    s.connect(('127.0.0.1', port))
    s.settimeout(3)
    s.sendall((json.dumps(d) + '\n').encode())
    time.sleep(0.15)
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

def rb(port, addr):
    r = q(port, {"cmd": "dump_ram", "id": 1, "addr": "0x%04X" % addr})
    return int(r.get("hex", "00")[:2], 16)

# Wait for both servers
time.sleep(1)

prev_n689 = -1
prev_e689 = -1

for check in range(60):
    time.sleep(0.5)
    nf = q(4370, {"cmd": "frame", "id": 1}).get("frame", 0)
    ef = q(4371, {"cmd": "frame", "id": 1}).get("frame", 0)
    n689 = rb(4370, 0x689)
    e689 = rb(4371, 0x689)
    n681 = rb(4370, 0x681)
    e681 = rb(4371, 0x681)
    n76 = rb(4370, 0x76)
    e76 = rb(4371, 0x76)

    changed = ""
    if n689 != prev_n689 or e689 != prev_e689:
        changed = " <-- CHANGED"
    prev_n689 = n689
    prev_e689 = e689

    if n689 != e689 or changed or check < 10:
        print(f"nf={nf:5d} ef={ef:5d} | $689: N=${n689:02X} E=${e689:02X} | $681: N=${n681:02X} E=${e681:02X} | $76: N=${n76:02X} E=${e76:02X}{changed}")

    if n689 == 0 and e689 != 0:
        print("*** NATIVE $0689 CLEARED! ***")
        # Also dump some context
        n248 = rb(4370, 0x248)
        e248 = rb(4371, 0x248)
        n636 = rb(4370, 0x636)
        e636 = rb(4371, 0x636)
        print(f"  $248: N=${n248:02X} E=${e248:02X} | $636: N=${n636:02X} E=${e636:02X}")
        break
