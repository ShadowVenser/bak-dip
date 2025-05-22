import chisel3._

class NandGate extends RawModule {

  val x1 = IO(Input(Bool()))
  val x2 = IO(Input(Bool()))
  val y  = IO(Output(Bool()))
  
  y := ~(x1 & x2)
}