import chisel3._
import chisel3.simulator.scalatest.ChiselSim
import chisel3.simulator.stimulus.{RunUntilFinished, RunUntilSuccess}
import org.scalatest.funspec.AnyFunSpec
import scala.util.Random

class MuxTest extends AnyFunSpec with ChiselSim {

  val rnd = new Random()

  describe("Sync MUX") {

    for (i <- 0 until 10) {
      val x1 = rnd.between(0, 65536)  
      val x2 = rnd.between(0, 65536) 
      val addr = rnd.nextBoolean()

      it(s"test ${i+1}") {
        simulateRaw(new SyncMux) { dut =>
          dut.clr_n.poke(0)
          dut.clk.step()
          dut.clr_n.poke(1)
          dut.x1.poke(x1)
          dut.x2.poke(x2)
          dut.addr.poke(addr.B)
          dut.clk.step()
          dut.y.expect(if (addr) x2 else x1)
        }

      }  
    }

  }
}