import chisel3._
import chisel3.simulator.scalatest.ChiselSim
import chisel3.simulator.stimulus.{RunUntilFinished, RunUntilSuccess}
import chisel3.util.Counter
import org.scalatest.funspec.AnyFunSpec
import scala.util.Random

class MedianTest extends AnyFunSpec with ChiselSim {

  def arrToDut(arr: Array[Int], dut: Median) = {
    for (i <- 0 until 3) {
      for (j <- 0 until 3) {
        dut.arr(i)(j).poke(arr(i*3+j))
      }
    }
  }

  describe("Median") {
    it("Basic Test") {
      simulateRaw(new Median) { dut =>
        val base = (0 to 8).toArray
        val arrays = (0 to 8).map(i => base.drop(i) ++ base.take(i))
        for (arr <- arrays) {
          arrToDut(arr, dut)
          dut.med.expect(4)
        }
      }  
    }
    it("Main Test") {
      simulateRaw(new Median) { dut =>
        val rnd = new Random()
        val test_count = 3500
        for (_ <- 0 until test_count) {
          val arr = Array.fill(9)(rnd.nextInt(256))
          val sorted = arr.sorted
          val check_val = sorted(4)
          arrToDut(arr, dut)
          dut.med.expect(check_val)
        }
      }
    }
  }
}