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

# Read zero page sound pointers
r = cmd({"cmd": "dump_ram", "id": 1, "addr": "0x00DC"})
h = r['hex']
dc = int(h[0:2], 16)
dd = int(h[2:4], 16)
ptr = (dd << 8) | dc
print("Channel 0 ptr: $%04X" % ptr)

# Read $0636
r = cmd({"cmd": "dump_ram", "id": 1, "addr": "0x0636"})
print("$0636 = $%s" % r['hex'][:2])

# Read $0681 (timer)
r = cmd({"cmd": "dump_ram", "id": 1, "addr": "0x0681"})
print("$0681 = $%s" % r['hex'][:2])

s.close()

# Now check sound data from ROM
rom = open("Yoshi # NES.NES", "rb").read()
prg_start = 16
fixed_offset = prg_start + 7 * 16384

if ptr >= 0xC000:
    rom_off = fixed_offset + (ptr - 0xC000)
    data = rom[rom_off:rom_off+128]
    print("\nSound data at $%04X:" % ptr)
    for i in range(0, len(data), 16):
        hex_str = ' '.join('%02X' % b for b in data[i:i+16])
        addr = ptr + i
        print("  $%04X: %s" % (addr, hex_str))

    # Find $Ex commands
    print("\n$Ex commands in data:")
    for i, b in enumerate(data):
        if (b & 0xF0) == 0xE0:
            print("  offset +%d ($%04X): $%02X = E%X command" % (i, ptr+i, b, b&0xF))
else:
    print("Pointer $%04X not in fixed bank - check switchable bank" % ptr)
