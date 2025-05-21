import chisel3._
import chisel3.simulator.scalatest.ChiselSim
import chisel3.simulator.stimulus.{RunUntilFinished, RunUntilSuccess}
import chisel3.util.Counter
import org.scalatest.funspec.AnyFunSpec


class MedianTest extends AnyFunSpec with ChiselSim {

  def arrToDut(arr: Array[Int], dut: Median) = {
    for (i <- 0 until 3) {
      for (j <- 0 until 3) {
        dut.arr(i)(j).poke(arr(i*3+j))
      }
    }
  }

  describe("Median") {

    val base = (0 to 8).toArray
    val arrays = (0 to 8).map(i => base.drop(i) ++ base.take(i))

    for (arr <- arrays) {
      it(s"test ${arr(0)+1}") {

        simulateRaw(new Median) { dut =>
          // Poke different values on the two input ports.
          arrToDut(arr, dut)
          // Expect that the sum of the two inputs is on the output port.
          dut.med.expect(4)
        }

      }  
    }

  }


}