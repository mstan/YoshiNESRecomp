import socket, json, time
s = socket.socket()
s.connect(('127.0.0.1', 4371))
s.settimeout(2)
s.sendall(b'{"cmd":"frame","id":1}\n')
time.sleep(0.3)
r = b''
while True:
    try:
        r += s.recv(4096)
    except:
        break
print(r.decode())
s.close()
