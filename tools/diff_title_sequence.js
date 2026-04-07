/*
 * diff_title_sequence.js — Find the first native↔oracle divergence in
 * Yoshi's title-screen sequence using the in-process --verify build.
 *
 * Architecture note: --verify is single-process. The native runner runs
 * the recompiled game; Nestopia runs in a background bridge inside the
 * same process. verify_mode.c diffs work RAM + nametable RAM each frame
 * and pushes the result into the ring buffer via
 * debug_server_set_verify_result(). This script queries that ring buffer
 * over TCP — it does NOT need to compare two processes itself.
 *
 * Run order:
 *   1) Start the game in verify mode:
 *        ./build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --verify
 *   2) Wait a few seconds for the title screen to play out, then run:
 *        node tools/diff_title_sequence.js
 *
 * Output: frame number, addr, region, native vs oracle byte, last_func.
 */
const net = require("net");

const PORT = 4380; // native+verify (single process)

function send(msg) {
  return new Promise((resolve, reject) => {
    const c = new net.Socket();
    let buf = "";
    c.setTimeout(5000, () => { c.destroy(); reject(new Error("timeout")); });
    c.connect(PORT, "127.0.0.1", () => c.write(JSON.stringify(msg) + "\n"));
    c.on("data", chunk => {
      buf += chunk.toString();
      const nl = buf.indexOf("\n");
      if (nl >= 0) { c.end(); }
    });
    c.on("end",   () => { try { resolve(JSON.parse(buf.trim())); } catch (e) { reject(e); } });
    c.on("error", reject);
  });
}

async function main() {
  // 1. Sanity ping.
  const pong = await send({ cmd: "ping", id: 1 });
  console.log(`ping: frame=${pong.frame}`);
  if (!pong.ok) { console.error("ping failed"); process.exit(2); }

  // 2. Ask for the first failing frame in the ring buffer.
  const ff = await send({ cmd: "first_failure", id: 2 });
  if (!ff.ok) { console.error("first_failure error:", ff.err || ff.error); process.exit(2); }
  if (ff.frame < 0) {
    console.log("No verify failures recorded in ring buffer.");
    console.log("Either the run hasn't reached a divergence yet, or the");
    console.log("ring buffer was cleared. Let the game run longer and retry.");
    process.exit(0);
  }

  console.log(`FIRST FAILURE: frame=${ff.frame} diff_count=${ff.diff_count}`);

  // 3. Pull the byte-level diff for that frame.
  const fd = await send({ cmd: "frame_diff", id: 3, frame: ff.frame });
  if (!fd.ok) { console.error("frame_diff error:", fd.err || fd.error); process.exit(2); }

  console.log("");
  console.log("===== FIRST DIVERGENCE =====");
  console.log(`Frame:      ${fd.frame}`);
  console.log(`verify:     ${fd.verify_pass}  diff_count: ${fd.diff_count}`);
  console.log(`last_func:  ${fd.last_func}`);
  console.log(`diffs (showing first ${fd.diffs.length}):`);
  for (const d of fd.diffs) {
    console.log(`  [${d.region.padEnd(3)}] ${d.addr}  native=${d.native}  oracle=${d.oracle}`);
  }

  // 4. Pull surrounding frame context for the divergence.
  const gf = await send({ cmd: "get_frame", id: 4, frame: ff.frame });
  if (gf.ok) {
    console.log("");
    console.log("===== FRAME CONTEXT =====");
    console.log(`bank=${gf.bank}  ppuctrl=${gf.ppu.ctrl}  ppumask=${gf.ppu.mask}  ppustatus=${gf.ppu.status}`);
    console.log(`ppuaddr=${gf.ppu.ppuaddr}  scroll=(${gf.ppu.scroll_x},${gf.ppu.scroll_y})  latch=${gf.ppu.addr_latch}`);
    console.log(`mapper.chr0=${gf.mapper.chr0} chr1=${gf.mapper.chr1} ctrl=${gf.mapper.ctrl} prg=${gf.mapper.prg_reg}`);
    console.log(`A=${gf.cpu.A} X=${gf.cpu.X} Y=${gf.cpu.Y} S=${gf.cpu.S} P=${gf.cpu.P}`);
  }

  process.exit(0);
}

main().catch(e => { console.error(e); process.exit(1); });
