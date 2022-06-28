package riscv.Csrs
import chisel3._
import chisel3.util._
import riscv.WBU.Difftest
import riscv.Common.Csrcode._

/**
  * Csrs
  */
class Csrs extends Module {
  val io = IO(new Bundle {

  })
  var Csrs = RegInit(VecInit(Seq.fill(32)(0.U(64.W))));

  when (reset.asBool()) {
    Csrs(mstatus) := "h0a00001800".U
    Csrs(mcycle)  := 0.U
  }

  Csrs(mcycle) := Csrs(mcycle) + 1.U
}
