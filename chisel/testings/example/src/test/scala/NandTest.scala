import chisel3._
import chisel3.simulator.scalatest.ChiselSim
import chisel3.simulator.stimulus.{RunUntilFinished, RunUntilSuccess}
import org.scalatest.funspec.AnyFunSpec


class NandTest extends AnyFunSpec with ChiselSim {

  describe("NAND Gate") {

    for (i <- 0 until 4) {
      it(s"test ${i+1}") {
        simulateRaw(new NandGate) { dut =>
          dut.x1.poke(i / 2)
          dut.x2.poke(i % 2)
          dut.y.expect((((i % 2) & (i / 2)) + 1) % 2)
        }

      }  
    }

  }
}