import chisel3._
import chisel3.util._

class SyncMux extends RawModule {
  val clk    = IO(Input(Clock()))
  val clr_n  = IO(Input(Bool()))

  val x1   = IO(Input(UInt(16.W)))
  val x2   = IO(Input(UInt(16.W)))
  val addr = IO(Input(Bool()))
  val y    = IO(Output(UInt(16.W)))

  val asyncReset = (~clr_n).asAsyncReset
  
  withClockAndReset(clk, asyncReset) {
    val out_value = RegInit(0.U(16.W))
    out_value := Mux(addr, x2, x1)
    y := out_value
  }
  
}