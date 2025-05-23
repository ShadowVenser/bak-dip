import chisel3._
import chisel3.simulator.scalatest.ChiselSim
import chisel3.simulator.stimulus.{RunUntilFinished, RunUntilSuccess}
import org.scalatest.funspec.AnyFunSpec


class NandTest extends AnyFunSpec with ChiselSim {

  describe("NAND Gate") {
    it(s"Basic test") {
      simulateRaw(new NandGate) { dut =>
        for (i <- 0 until 4) {
          dut.x1.poke(i / 2)
          dut.x2.poke(i % 2)
          dut.y.expect((((i % 2) & (i / 2)) + 1) % 2)
        }

      }  
    }

  }
}