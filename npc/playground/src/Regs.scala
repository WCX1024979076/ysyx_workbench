package riscv
import chisel3._
import chisel3.util._
import riscv.WBU.Difftest
/**
  * Regs
  */
class Regs extends Module {
  val io = IO(new Bundle {
    val Pc = Input(UInt(64.W))
    val R1 = Input(UInt(5.W))
    val R2 = Input(UInt(5.W))
    val Rdest = Input(UInt(5.W))
    val DataIn = Input(UInt(64.W))
    val RegWrite = Input(UInt(1.W))
    val DataR1 = Output(UInt(64.W))
    val DataR2 = Output(UInt(64.W))
  })
  var Regs = RegInit(VecInit(Seq.fill(32)(0.U(64.W))));

  var difftest = Module(new Difftest);
  difftest.io.gpr := Regs;
  difftest.io.PcVal := io.Pc;

  io.DataR1 := Regs(io.R1);
  io.DataR2 := Regs(io.R2);

  when((io.RegWrite).asBool)
  {
    Regs(io.Rdest) := io.DataIn;
  };
  
  Regs(0) := 0.U;
}
