import chisel3._
// import chisel3.util._
// _root_ disambiguates from package chisel3.util.circt if user imports chisel3.util._
import _root_.circt.stage.ChiselStage

class Median extends RawModule {

    var arr = IO(Input(Vec(3, Vec(3, UInt(8.W)))))
    var med = IO(Output(UInt(8.W)))

    var f_high = Wire(Vec(3, UInt(8.W)))
    var f_med = Wire(Vec(3, UInt(8.W)))
    var f_low = Wire(Vec(3, UInt(8.W)))

    for (i <- 0 until 3) {
      comp(arr(i)(0), arr(i)(1), arr(i)(2), hi=f_high(i), lo=f_low(i), me=f_med(i))
    }

    var (s_high, s_med, s_low) = (Wire(UInt(8.W)), Wire(UInt(8.W)), Wire(UInt(8.W))) 

    comp(f_high(0), f_high(1), f_high(2), lo=s_high, mode="low")
    comp(f_med(0), f_med(1), f_med(2), me=s_med, mode="med")
    comp(f_low(0), f_low(1), f_low(2), hi=s_low, mode="high")

    comp(s_high, s_med, s_low, me=med, mode="med")

    def comp(a:UInt, b:UInt, c:UInt, hi:UInt=null, me:UInt=null, lo:UInt=null, mode:String="full") = {
        val sels = Wire(Vec(3, Bool()))
        val subs = Wire(Vec(3, UInt(8.W)))
        //Not used wires
        if ((mode == "high") || (mode == "low")) {
            sels(2) := 0.U
            subs(0) := 0.U
            subs(2) := 0.U
        }

        //first compare
        if (mode == "high") sels(0) := a < b
        else sels(0) := a > b
        if ((mode == "full") || (mode == "med")) subs(0) := Mux(sels(0), a, b)
        subs(1) := Mux(sels(0), b, a)

        //second compare
        sels(1) := subs(1) > c
        if (mode == "high") hi := Mux(sels(1), subs(1), c)
        else {
          if (mode != "low") subs(2) := Mux(sels(1), subs(1), c)
          if (mode != "med") lo := Mux(sels(1), c, subs(1))
        }

        //third compare
        if ((mode != "low") && (mode != "high")) {
          sels(2) := subs(0) > subs(2)
          if (mode != "med") hi := Mux(sels(2), subs(0), subs(2))
          me := Mux(sels(2), subs(2), subs(0))
        }
    }


}

object Main extends App {
  println(
    ChiselStage.emitSystemVerilog(
      gen = new Median,
      firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
    )
  )
}