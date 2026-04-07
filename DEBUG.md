# Debug Loop (Short Form)

The full protocol is in `CLAUDE.md`. The global rules are in
`F:\Projects\PRINCIPLES.md`. Both override this file.

```
1. Sync state (PPU/scroll/palette/RAM markers — NOT frame number)
2. Dump native + oracle (full state, both sides)
3. Diff bytes
4. Find FIRST divergence
5. Trace the writer (function + instruction + call path)
6. Classify (codegen / runner / timing / config)
7. Fix the tool — never the generated output
```

If any step is skipped, the result is invalid. Restart.

Inspection lives entirely on the TCP ring buffer:
- Native: 127.0.0.1:**4380**
- Oracle: 127.0.0.1:**4381**

See `TCP.md` for the command list and protocol.

---

## TITLE SCREEN TRIAGE

Before deep debugging, classify the corruption:

- Wrong tile SHAPES → CHR / mapper issue
- Correct shapes, wrong tiles → nametable issue
- Wrong colors → palette issue

This determines which memory region to inspect first.
