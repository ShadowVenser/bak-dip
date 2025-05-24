import chisel3._
import _root_.circt.stage.ChiselStage

object Main extends App {
  // println(
  //   ChiselStage.emitSystemVerilog(
  //     gen = new NandGate,
  //     firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  //   )
  // )
  println(
    ChiselStage.emitSystemVerilog(
      gen = new SyncMux,
      firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
    )
  )
}