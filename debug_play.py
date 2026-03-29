import socket, json, time

START = 0x08

class DebugClient:
    def __init__(self):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.connect(('127.0.0.1', 4370))
        self.sock.settimeout(2)

    def send(self, cmd_dict):
        msg = json.dumps(cmd_dict) + '\n'
        self.sock.sendall(msg.encode())
        time.sleep(0.1)
        result = b''
        while True:
            try:
                chunk = self.sock.recv(8192)
                if not chunk: break
                result += chunk
            except socket.timeout:
                break
        for line in reversed(result.decode(errors='replace').strip().split('\n')):
            try: return json.loads(line)
            except: continue
        return {}

    def frame(self):
        return self.send({"cmd": "frame", "id": 1}).get("frame", -1)

    def state(self):
        r = self.send({"cmd": "dump_ram", "id": 1, "addr": "0x0248"})
        return int(r.get("hex", "00")[:2], 16)

    def write(self, addr, val):
        self.send({"cmd": "write_ram", "id": 1, "addr": "0x%04X" % addr, "val": "0x%02X" % val})

    def press(self, buttons, frames=5):
        self.send({"cmd": "set_input", "id": 1, "buttons": "0x%02X" % buttons})
        time.sleep(frames / 60.0 + 0.1)
        self.send({"cmd": "clear_input", "id": 1})
        time.sleep(0.05)

    def wait(self, frames):
        time.sleep(frames / 60.0)

    def close(self):
        self.sock.close()

def main():
    c = DebugClient()
    print("Connected")

    c.wait(180)
    print(f"Title: frame={c.frame()} state={c.state()}")

    # Press START on title screen
    print("\nHolding START for 10 frames...")
    c.press(START, 10)
    c.wait(60)
    s = c.state()
    f = c.frame()
    print(f"After START: frame={f} state={s}")

    # If still on title, press START with longer hold
    if s == 5 or s == 1:
        print("Trying longer START hold...")
        c.press(START, 30)
        c.wait(120)
        s = c.state()
        print(f"After long START: frame={c.frame()} state={s}")

    # Take screenshot reference
    c.wait(60)
    print(f"\nSettled: frame={c.frame()} state={c.state()}")

    # Check frozen
    f1 = c.frame()
    c.wait(60)
    f2 = c.frame()
    print(f"Frozen check: {f1}->{f2} (frozen={f2-f1<10})")

    c.close()

if __name__ == '__main__':
    main()
