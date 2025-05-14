//> using scala "2.13.12"
//> using dep "org.chipsalliance::chisel:6.6.0"
//> using plugin "org.chipsalliance:::chisel-plugin:6.6.0"
//> using options "-unchecked", "-deprecation", "-language:reflectiveCalls", "-feature", "-Xcheckinit", "-Xfatal-warnings", "-Ywarn-dead-code", "-Ywarn-unused", "-Ymacro-annotations"

import chisel3._
import chisel3.util._
// _root_ disambiguates from package chisel3.util.circt if user imports chisel3.util._
import _root_.circt.stage.ChiselStage

class new_pwm_v2 extends Module {

  val wr_data = IO(Input(UInt(32.W)))
  val cs      = IO(Input(Bool()))
  val wr_n    = IO(Input(Bool()))
  val addr    = IO(Input(UInt(2.W)))
  val rd_data = IO(Output(UInt(32.W)))
  val pwm_out  = IO(Output(UInt(8.W)))

  //Registers and wires
  val div = RegInit(0.U(32.W))
  val duty_a = RegInit(0.U(32.W))
  val duty_b = RegInit(0.U(32.W))
  val counter = RegInit(0.U(32.W))
  val off_a = RegInit(0.U(1.W))
  val off_b = RegInit(0.U(1.W))
  val div_en = Wire(Bool())
  val duty_en = Wire(Bool())
  val duty_a_en = Wire(Bool())
  val duty_b_en = Wire(Bool())
  
  // Avalon slave interface
  div_en := cs & ~wr_n & ~addr(1)
  duty_en := cs & ~wr_n & addr(1)
  duty_a_en := duty_en & ~addr(0)
  duty_b_en := duty_en &  addr(0)

  //register write
  when (div_en) {
    div := wr_data
  }
  when (duty_a_en) {
    duty_a := wr_data
  }
  when (duty_b_en) {
    duty_b := wr_data
  }

  // register read
  rd_data := Mux(~addr(1), 
                  div, Mux(~addr(0), 
                            duty_a, duty_b))
  
  //PWM Counter
  counter := Mux(counter >= div, 0.U, counter + 1.U)
  
  //PWM Compare
  off_a := Mux(counter >= duty_a, 
                1.U, Mux(counter === 0.U,
                          0.U, off_a))
  
  off_b := Mux(counter >= duty_b, 
                1.U, Mux(counter === 0.U,
                          0.U, off_b))

  pwm_out := Cat(Fill(4, ~off_a), Fill(4, ~off_b))
}



object Main extends App {
  println(
    ChiselStage.emitSystemVerilog(
      gen = new new_pwm_v2,
      firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
    )
  )
}
