import socket, sys, time, json

def send_cmd(cmd_dict):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    try:
        s.connect(('127.0.0.1', 4370))
        s.settimeout(3)
        msg = json.dumps(cmd_dict) + '\n'
        s.sendall(msg.encode())
        time.sleep(0.5)
        result = b''
        while True:
            try:
                chunk = s.recv(8192)
                if not chunk:
                    break
                result += chunk
            except socket.timeout:
                break
        print(result.decode())
    except Exception as e:
        print(f'Error: {e}')
    finally:
        s.close()

if __name__ == '__main__':
    if len(sys.argv) < 2:
        send_cmd({"cmd": "ping", "id": 1})
    else:
        cmd = sys.argv[1]
        d = {"cmd": cmd, "id": 1}
        for arg in sys.argv[2:]:
            if '=' in arg:
                k, v = arg.split('=', 1)
                try:
                    d[k] = int(v)
                except ValueError:
                    d[k] = v
        send_cmd(d)
