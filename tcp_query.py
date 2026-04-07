#!/usr/bin/env python3
"""Quick TCP query helper for the Yoshi runner debug server."""
import socket, sys, time

def cmd(sock, c):
    sock.sendall((c + "\n").encode())
    buf = b""
    sock.settimeout(2.0)
    while True:
        try:
            d = sock.recv(65536)
            if not d:
                break
            buf += d
            if buf.endswith(b"\n"):
                break
        except socket.timeout:
            break
    return buf.decode(errors="replace")

def main():
    port = 4380
    s = socket.socket()
    s.connect(("127.0.0.1", port))
    for c in sys.argv[1:]:
        out = cmd(s, c)
        print(f"=== {c} ===")
        print(out)

if __name__ == "__main__":
    main()
